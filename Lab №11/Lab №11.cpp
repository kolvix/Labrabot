#include <iostream>
using namespace std;
struct Node
{
    int x;//информационный элемент
    Node* Next;//указатель на следующий элемент
};
typedef Node* PNode;

void Add(int data, PNode& Head, PNode& LastNode)//добавление

{
    PNode Temp;//Temp - новый элемент, LastNode - последний

    if (Head == NULL)
    {
        Head = new Node;
        LastNode = Head;
        Head->Next = NULL;
    }
    else
    {
        Temp = new Node;
        LastNode->Next = Temp;
        LastNode = Temp;
        LastNode->Next = NULL;
    }
    LastNode->x = data;
}
void Show(PNode Head)//отображение очереди
{
    while (Head != NULL)//пока текущий элемент не NULL
    {
        cout << Head->x << " ";//выводим поле
        Head = Head->Next;//переходим к следующему элементу
    }
}

void DeleteNode(PNode& Head, PNode OldNode)
{
    PNode q = Head;
    if (Head == OldNode)
        Head = OldNode->Next; // удаляем первый элемент
    else
    {
        while (q && q->Next != OldNode) // ищем элемент
            q = q->Next;
        if (q == NULL) return;
        q->Next = OldNode->Next;
    }
    delete OldNode; // освобождаем память
}

void AddAfter(int data, PNode p, PNode NewNode)
{
    NewNode->Next = p->Next;
    NewNode->x = data;
    p->Next = NewNode;
}

void main()
{
    PNode Head, LastNode;
    int n;
    int k;
    Head = NULL;
    LastNode = NULL;

    cout << "vvedite skolko elemetov v spiske\n";
    cin >> k;


    cout << "vvedite spisok \n";
    for (int i = 0; i < k; i++) //заносим данные в очередь
    {
        cin >> n;
        Add(n, Head, LastNode);
    }
    cout << "spisok: ";
    Show(Head);//выводим очередь
    cout << endl;

    cout << "vvedite nomer elementa kotorii udalit\n";
    int x = -1;

    while (x > k || x <= 0)
    {
        cout << "vvedite nomer ot 1 do " << k << endl;
        cin >> x;
    }
    PNode q = Head;
    for (int i = 0; i < x - 1; i++)
        q = q->Next;
    DeleteNode(Head, q);
    Show(Head);//выводим очередь

    cout << "\nvvedite pod kakim nomerom dobavit element\n";
    int y = -1;

    while (y > k || y <= 0)
    {
        cout << "vvedite nomer ot 1 do " << k << endl;
        cin >> y;
    }
    PNode NewNode = new Node;
    int g;
    cout << "vvedite znachenie elementa\n";
    cin >> g;
    q = Head;
    if (y - 2 < 0)
    {
        NewNode->Next = Head;
        NewNode->x = g;
        Head = NewNode;
    }
    else
    {
        for (int i = 0; i < y - 2; i++)
            q = q->Next;
        AddAfter(g, q, NewNode);

    }
    Show(Head);
}