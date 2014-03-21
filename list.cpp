#include "iostream"
#include "locale"
using namespace std;
class List
{
int nomer;
int element;
List* next;
List* Begin;
List* End;
public:
List();
void add();
void del(int nomer);
};
List::List()
{   
	End=0;
	Begin=0;
	nomer=0;
}
void List::add()
{   
	List* tmp;
	tmp=(List*)malloc(1*sizeof(int));
	cout<<"введите элемент "<<"\n";
	cin>>tmp->element;
	if (!Begin)
	{   
		Begin=tmp;
		
		End=tmp;
		tmp->next=0;
	}
	else
	{
		End->next=tmp;
		End=tmp;
	    tmp->next=0;
	}
	nomer++;
}

void List::del(int nomer)
{
	List* tmp;
	for(tmp=Begin; tmp!=0;tmp=tmp->next)
	{
	 if(nomer==1)
	 {
		 Begin=tmp->next;
		 free(tmp) ;
	 }
	 else	
	    if (tmp->nomer==nomer-1)
		{
		  tmp->next=tmp->next->next;
		  free(tmp);           
		}

	}

}
void main()
{   setlocale(LC_ALL,"rus");
	int n;
	int toDelete;
	List L;
	cout<<"Введите количество элементов в списке"<<"\n";
	cin>>n;
    for(int i=0;i<n;i++)
	{   cout<<"элемент номер "<<i+1<<"  ";
		L.add();
	}
	cout<<"введите номер элемента для удаления"<<"\n";
	cin>>toDelete;
	L.del(toDelete);



}