#include <iostream>
#include<vector>
#include <cmath>
using namespace std;
int main()

{
    int a,c;
    int summ = 0;
    int max = 0;
    int min=1000000;
    int maxind = 0;
    int minind = 0;
    cout << "Write the scale of your massive:";
    cin >> a;
    int* array = new int[a];
    int* newArray = new int[a];
    int j = 0;
    for (int i = 0; i < a; i++) {
        cout << "write the " << i + 1 << " number:" << endl;
        cin >> array[i];

    }

    cout << "Your massive:";
    for (int i = 0; i < a; i++) {
        cout << array[i];

    }

   
    for (int i = 0; i < a; i++) {
        if (array[i] > max) {
            max = array[i];
            maxind = i;
        }
        c = array[maxind];;
        array[maxind] = array[a - 1];
        array[a - 1] = c;

    }

    for (int i = 0; i < a; i++) {
        if (array[i] < min) {
            min = array[i];
            minind = i;
        }
        int  d = array[minind];;
        array[minind] = array[0];
        array[0] = d;
    }



    
    cout << "Your new massive:";
    for (int i = 0; i < a; i++) {
        cout << array[i];

    }
    

          

   


   // for (int i = 0; i < j; i++) {
     //   if (newArray[i] > max)
       //     max = newArray[i];

    //}
   // cout << "The biggest element from chetnue:" << max;




    return 0;


}
