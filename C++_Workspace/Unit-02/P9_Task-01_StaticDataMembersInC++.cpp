#include<iostream>
using namespace std;

class Fruits{
    private:
        int n;
        static int total;
    public:
        void count(int n){
            this->n=n;
            ++total;
        }
        int returnTotal(){
            return total;
        }

};

int Fruits::total=0;

int main()
{
    Fruits obj[5]; int i;
    for(i=0;i<4;i++){
        obj[i].count(i);
    }
    int n=obj[0].returnTotal();
    cout<<"Member function is called "<<n<<" times."<<endl;

    return 0;
}