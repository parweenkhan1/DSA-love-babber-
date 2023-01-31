#include <iostream>//vector is a dynamic array
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"size--->"<<v.capacity()<<endl;
    vector<int> a(5,1);
    vector<int> last(a);
     for (int i = 0; i < last.size(); i++)
    {
        cout << last[i] << " ";
    }
    cout << endl;
    cout << "capacity " << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity " << v.capacity() << endl;
    cout << "size " << v.size() << endl;
    cout << "Element at second index " << v.at(2) << endl;
    cout << "first element " << v.front() << endl;
    cout << "Last element" << v.back() << endl;
    cout << "Before pop " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "After pop " << endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Before clear " <<v.size()<<endl;
    v.clear();
    cout << "After clear " <<v.size()<<endl;




}