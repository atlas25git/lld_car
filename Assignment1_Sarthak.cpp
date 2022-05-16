#include<bits/stdc++.h>
using namespace std;
//Comment it to stop the debug mode
#define debugON

//defining classes

class Doors
{   
    protected:
        int count;
        string size;

    Doors()
    {   
        count = 0;
        size = "";
        cout<<"Default Constructor Doors"<<endl;

        #ifdef debugON
        cout<<"In constructor Doors\n";
        #endif
    }

    Doors(int x)
    {
        count = x;
        cout<<"Parameterized constructor doors\n";

        #ifdef debugON
        cout<<"In constructor Doors Parameterized\n";
        #endif
    }

    virtual ~Doors()
    {
        cout<<"Destructor for Doors called\n";

        #ifdef debugON
        cout<<"In Destructor Doors\n";
        #endif
    }
};

class DoorsLarge : protected Doors
{
    public:
    
    DoorsLarge()
    {
        cout<<"Default Constructor DoorsLarge\n";

        #ifdef debugON
        cout<<"In constructor DoorsLarge\n";
        #endif
    }

    void SetDoorsLarge(int n)
    {   
        cout<<"Parameterized Constructor DoorsLarge\n";
        count = n;
        size = "Large";

        #ifdef debugON
        cout<<"In SetDoorsLarge\n";
        #endif
    }

    int GetDoorCount()
    {
        // cout<<count<<"\n";

        #ifdef debugON
        cout<<"In  GetDoorCount DoorsLarge\n";
        #endif

        return count;
    }

    string GetDoorSize()
    {
        // cout<<size<<"\n";

        #ifdef debugON
        cout<<"In GetDoorSize DoorsLarge\n";
        #endif

        return size;
    }

     ~DoorsLarge()
    {
        cout<<"Destructor for DoorsLarge called\n";

        #ifdef debugON
        cout<<"In Destructor DoorsLarge\n";
        #endif

    }
    
};

class DoorsSmall : protected Doors
{
    public:
    
    DoorsSmall()
    {   
        cout<<"Default Constructor DoorsSmall\n";
        #ifdef debugON
        cout<<"In constructor DoorsSmall\n";
        #endif
    }

    void SetDoorsSmall(int n)
    {   
        cout<<"Parameterized Constructor DoorsSmall\n";
        count = n;
        size = "Small";

        #ifdef debugON
        cout<<"In  SetDoorsSmall\n";
        #endif
    }

    int GetDoorCount()
    {
        // cout<<count<<"\n";
        #ifdef debugON
        cout<<"In GetDoorCount DoorsSmall\n";
        #endif
        return count;
    }

    string GetDoorSize()
    {
        // cout<<size<<"\n";
        #ifdef debugON
        cout<<"In GetDoorSize DoorsSmall\n";
        #endif

        return size;
    }

    ~DoorsSmall()
    {   
        #ifdef debugON
        cout<<"In destructor DoorsSmall\n";
        #endif
        cout<<"Destructor for DoorsSmall called\n";
    }
};


//Cars

class Car{
    
    protected:
    DoorsLarge DL;
    DoorsSmall DS;
    string Type;

    public:
    Car()
    {   DL.SetDoorsLarge(0);
        Type = "Car";
        cout<<"Default Constructor Car\n";

        #ifdef debugON
        cout<<"In constructor Car\n";
        #endif
    }

    
    virtual void GetDoorsCount()
    {
        int total = DL.GetDoorCount() + DS.GetDoorCount();
        cout<<total<<"\n";

        #ifdef debugON
        cout<<"In  GetDoorsCount Class: Car\n";
        #endif
    }

    virtual void GetDoorsSize()
    {
         if(DL.GetDoorCount())
            cout<<"Door Size is Large\n";
        else if(DS.GetDoorCount())
            cout<<"Door Size is Small\n";

        #ifdef debugON
        cout<<"In GetDoorsSize of Class: Car\n";
        #endif

    }

    virtual ~Car()
    {
        cout<<"Destructor for Car called\n";

        #ifdef debugON
        cout<<"In destructor Car\n";
        #endif
    }

};

class Tron : public Car
{
    public:
    Tron()
    {   
        #ifdef debugON
        cout<<"In constructor Tron\n";
        #endif
        Type = "Tron";
        DL.SetDoorsLarge(0);
        DS.SetDoorsSmall(2);
        cout<<"Default Constructor Tron\n TRON CREATED\n";
    }

    void GetDoorsCount()
    {   
        #ifdef debugON
        cout<<"In GetDoorsCount Tron\n";
        #endif
        int total = DL.GetDoorCount() + DS.GetDoorCount();
        cout<<"Doors in car: "<<Type<<" are = "<<total<<"\n";
    }

    void GetDoorsSize()
    {   
        #ifdef debugON
        cout<<"In GetDoorsSize Tron\n";
        #endif
        if(DL.GetDoorCount())
            cout<<"Door Size is Large\n";
        else if(DS.GetDoorCount())
            cout<<"Door Size is Small\n";

    }

    ~Tron()
    {   
        #ifdef debugON
        cout<<"In destructor Tron\n";
        #endif
        cout<<"Destructor for Tron called\n";
    }

};

class Nano : public Car
{   
    public:
    Nano()
    {   
        #ifdef debugON
        cout<<"In constructor Nano\n";
        #endif
        Type = "Nano";
        DL.SetDoorsLarge(0);
        DS.SetDoorsSmall(4);
        cout<<"Default Constructor Nano \n NANO CREATED\n";
    }

    
    void GetDoorsCount()
    {   
        #ifdef debugON
        cout<<"In GetDoorsCount Nano\n";
        #endif

        int total = DL.GetDoorCount() + DS.GetDoorCount();
        cout<<"Doors in car: "<<Type<<" are = "<<total<<"\n";
    }

    void GetDoorsSize()
    {
        #ifdef debugON
        cout<<"In  GetDoorsSize Nano\n";
        #endif
         if(DL.GetDoorCount())
            cout<<"Door Size is Large\n";
        else if(DS.GetDoorCount())
            cout<<"Door Size is Small\n";


    }

    ~Nano()
    {   
        #ifdef debugON
        cout<<"In destructor Nano\n";
        #endif
        cout<<"Destructor for Nano called\n";
    }

};


class Swift : public Car
{   
    public:
    Swift()
    {   
        #ifdef debugON
        cout<<"In constructor Swift\n";
        #endif
        Type = "Swift";
        DL.SetDoorsLarge(4);
        DS.SetDoorsSmall(0);
        cout<<"Default Constructor Swift \n Swift CREATED\n";
    }

    
    void GetDoorsCount()
    {   
        #ifdef debugON
        cout<<"In GetDoorsCount Class : Swift\n";
        #endif
        int total = DL.GetDoorCount() + DS.GetDoorCount();
        cout<<"Doors in car: "<<Type<<" are = "<<total<<"\n";
    }

    void GetDoorsSize()
    {   
        #ifdef debugON
        cout<<"In GetDoorsSize Class: Swift\n";
        #endif

         if(DL.GetDoorCount())
            cout<<"Door Size is Large\n";
        else if(DS.GetDoorCount())
            cout<<"Door Size is Small\n";


    }

    ~Swift()
    {   
        #ifdef debugON
        cout<<"In destructor Swift\n";
        #endif
        cout<<"Destructor for Swift called\n";
    }

};


int main()
{   
    //Will generate the output in a txt file
    //comment the line to get the output on the terminal
    freopen("output.txt","w",stdout);
    //Tasks:
    //1. Define Classes
    //2. Write Getters for door count and size
    
    //3. Instantiate a Nano dynamically
    cout<<"\n 3. Instantiating NANO dynamically on HEAP:\n";
    Car* car2 = new Nano();
    car2->GetDoorsCount();
    car2->GetDoorsSize();

    //4. Instantiate Swift and Tron as local variables on stack
    cout<<"\n 4. Instantiating Swift as local variables on stack \n";
    Swift swift;
    

    cout<<"\n 4.Instantiating Tron as local variables on stack \n";
    Tron tron;

    //5. Print door count for them.
    cout<<"\n 5. Door count for Swift\n";
    swift.GetDoorsCount();

    cout<<"\n 5. Door count for Tron\n";
    tron.GetDoorsCount();

    //6. Print door size them.
    cout<<"\n 6. Door size for Swift\n";
    swift.GetDoorsSize();

    cout<<"\n 6. Door size for Tron\n";
    tron.GetDoorsSize();


    //7. Function to iterate over a vector of dynamically created objects
    //   and iterate to print their properties;

    cout<<"\n 7. Iterating a vector of items dynamically created: \n";

    Car* car1 = new Swift();
    // Car* car2 = new Nano();
    Car* car3 = new Tron();
    Car* car4 = new Swift();

    vector<Car*> cars = {car1,car2,car3,car4};

    auto printSharedPTR = [](vector<Car*>& a) -> void
    {   
        #ifdef debugON
        cout<<"In printSharedPTR\n";
        #endif
        for(auto &x: a)
        {   
            cout<<" \n Details for ";
            x->GetDoorsCount();
            x->GetDoorsSize();
        };
    };

    printSharedPTR(cars);

    //8. Delete the memory allocated for cars once the function returns.
    cout<<"\n 8. Delete memory allocated for dynamically allocated cars\n\n";

    auto deleteSharedPTR = [](vector<Car*>& a) -> void
    {   
        #ifdef debugON
        cout<<"In deleteSharedPTR\n";
        #endif
d
        int y = 1;
        for(auto &x: a)
        {   
            cout<<"\n######################### "<<y++<<"\n\n";
            delete x;
            cout<<"\n";
        };
    };
    // delete car3;
    deleteSharedPTR(cars);

    cout<<"\n Scope End Destructors\n\n";
    return 0;
}