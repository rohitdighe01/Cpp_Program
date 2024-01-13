// Que // Given an array of marks of students ,
 //if the marks of any student is less than 35 print its roll number
 //.[roll number here refers to the index of the array.]

 #include<iostream>
 using namespace std;
 //int main(){
  //  int marks [6] ={23 ,45, 5 ,54,56,45};
     // for (int i=0;i<5;i++){
       // cin>>marks[i];
      
    
    

   //  for (int i=0;i<=5;i++){
     //   if(marks[i]<35)
      //  cout<<i<<" ";

  //   }
///}
    
 
 // ANother way to write this program 
  int main(){
    int n;
    cout<<"Enter no of students : ";
    cin>>n;

    int marks[n]; // 0 to n-1
    cout<<"Enter the marks :";
     for (int i =0;i<=5;i++){
        cin>>marks[i];

     }
     for (int i=0;i<=5;i++){
        if(marks[i]<35) cout<<i<<" ";

     }
      
     
      }

     