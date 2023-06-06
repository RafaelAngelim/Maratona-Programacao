    #include <iostream>
    #include <string>
    using namespace std;
     
    int main(){
     
        int quantity, i;
        string name, catapimba;
        cin >> quantity;
        for(i = 0; i < quantity; i++){
            cin >> name;
            if(name.back() == 'o'){catapimba = "FILIPINO";}
            else if(name.back() == 'u'){catapimba = "JAPANESE";}
            else if(name.back() == 'a'){catapimba = "KOREAN";}
            cout << catapimba << endl;
     
        }
        return 0;
    }
