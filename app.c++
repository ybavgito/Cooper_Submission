#include <bits/stdc++.h>
#include <chrono>
using namespace std;


class admin{
private:
    string username;
    string password;

};

class Person{
private:
    string username;
    string name;
    string email;
    string phone;
    int rating;

};

class Farmer : public Person{
private:
    map<int,Crop> Crops;
public:

    Farmer(string fname,string uname,string mail,string mob,int r){
        name=fname;
        username=uname;
        email=mail;
        phone=mob;
        rating=r;
    }
    void addCrop(int crop_id,string cname,int quantity,int p,int s){
        Crops[crop_id]=Crop(cname,quantity,p,s);
    }
    void deleteCrop(int id){
        if(Crops.count(id))
        Crops.erase(id);
        else
        cout<< "Crop is not present";
    }
    void updateCrop(int id, int q,int p){
        if(Crops.count(id))
        Crops[id].price=p;
        Crops[id].qty=q;
        else
        cout<< "Crop is not present";
    }



};

class Bid{

}

class Retailer : public Person{
private:
    vector<Bid> Crops;
public:
    void submitBid(int auc_id,){

    }
    void viewBids(){

    }

};


class Crop{

private:
    
    string name;
    int qty;
    int price;
    int status;
public:
    Crop(string cname,int quantity,int p,int s){
        name=cname;
        qty=quantity;
        price=p;
        status=s;
    }
};

class Auction{
private:
    int auction_id;
    int f_id;
    int p_id;
    int curr_amt;
    string curr_bidder;
    string timestamp;
    int status;

public:
    void createAuc(int auc_id,int farmer_id, int product_id, int start_amt,string bidder,string time){
        auction_id= auc_id;
        f_id=farmer_id;
        p_id=product_id;
        curr_amt=start_amt;
        curr_bidder=bidder;
        vector<<pair<int,string>> history;
    }
    void updateBid(int auc_id,int amt,int bidder,string time){
        if( curr_amt < amt){
        auction_id= auc_id;
        curr_amt=amt;
        curr_bidder=bidder;
        timestamp=time;
        }
        else
        ve
        cout<< "Place a higher Bid!";
    }

    void viewBids(int auc_id){
        cout<< auction_id <<endl 
        << p_id << endl
        << curr_amt <<endl
        << curr_bidder << endl
        << timestamp <<endl;
    }

    void closeAuc(){

    }

};

int main(){
    map<string,Farmer> Farmers;
    map<string,Retailer> Retailers;
    map<int,Auction> Auctions;
    do{
        int ch=-1;
        cout<< "Please Select an option: " <<endl;
        cout<< "1.Admin" <<endl;
        cout<< "2.Farmer" << endl;
        cout<< "3.Retailer" << endl;
        cout<< "4.Exit" << endl;
        cin >> ch;
        int ch2=-1;
        switch(ch){
            case 1:
            cout<< "Please Select an option: " <<endl;
            cout<< "Verify" <<endl;
            cin>> ch2;
            //
            break;

            case 2:
            
            cout<< "Please Select an option: " <<endl;
            cout<< "1.Register" <<endl;
            cout<< "2.Add crop" <<endl;
            cout<< "3.Delete crop" <<endl;
            cout<< "4.Create auction" <<endl;
            cin >> ch2;
            switch(ch2){
                case 1:
                string name,uname,
                cout<<"Enter your name: ";
                cin <<name;
                cout<" Enter your username:";
                cin <<
                cout<<
                Farmers[username]= new Farmer(name,uname,)
                case 2:
                int uname;
                cout<" Enter your username:";
                cin >> uname;
                if(mp.count(uname)){
                    mp[uname].Crops.push_back()
                }
                else{
                    cout<< "Unknown Farmer!";
                }

                case 3:
                

            }


        }


    }while(1);
}