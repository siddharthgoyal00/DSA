 #include<bits/stdc++.h> 
 #include<utility>
 #include<vector>
 using namespace std; 
 /*
 void explainPair (){
    pair <int, int> p ={1,2}; // it could be any data type 
     
    cout << p.first << " " << p.second; // accesss the pair
    
    // nested pair for storing more then two //

    pair<int, pair<int, int>> q = {1,{2,3}};

    cout << q.first << " " << q.second.second <<" " << q.second.first;
    
    pair<int, int> arr[] = { {1,2}, {3,4}}; //array using pair as a data type
    cout << arr[1].second;
    // out put will be 4

 }

//////////////////////////////////////////////////////
*/
 void explainVector(){
      vector<int> v; // creates empty container 
      v.push_back(1);
      v.emplace_back(2);

      vector<pair<int,int>>vec;

       vec.push_back({1,2});
       vec.emplace_back(1,2);

       vector<int>v1(5,100); //{100,100,100,100,100} five instances of 100

       vector<int> v2(5); //{" " ," " ," " ," " ," " }
         
       vector<int> v3(5,20); //{20,20,20,20,20}
       vector <int> v4(v3);
        }
 int main() {
    explainVector();
    return 0;
}
        
    
 



    