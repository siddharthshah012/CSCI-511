#include <iostream>
#include <deque>


using namespace std;


template <class T>
class TrackingDeque: public deque <T>
{
  private :
    int max_size;

  public:
    //deque<T> obj;
    TrackingDeque();
    ~TrackingDeque();
    void push_back(T);
    void push_front(T);
    T pop_front();

};

template <class T>
TrackingDeque<T>::TrackingDeque() : max_size(0)
{
   //max_size = 0;
}


template <class T>
TrackingDeque <T>::~TrackingDeque()
{
	cout<<"--> "<< max_size <<" <--"<<endl;
}


template <class T>
void TrackingDeque<T>::push_back(T a)
{
  deque<T>::push_back(a);
  if (deque<T>::size() > max_size)
  {
    max_size = deque<T>::size();
  }
}


template <class T>
void TrackingDeque <T> ::push_front(T a)
{
  deque<T>::push_front(a);
  if (deque<T>::size() > max_size)
  {
    max_size = deque<T>::size();
  }
}


template <class T>
T TrackingDeque<T>::pop_front()
{
   //char a;
   deque<T>::pop_front();
   if (deque<T>::size() > max_size)
   {
     max_size = deque<T>::size();
   }
   //return a;
}
