#include<iostream>
#include<queue>
using namespace std;

int main(){
  long long n1,n2,n3;
  queue <long long> m1,m2,m3;
  long long t1=0;
  long long t2=0;
  long long t3=0;
  long long num;
  
  cin>>n1>>n2>>n3;
  //untuk menara 1(m1)
  for(int i=0; i<n1; i++){
  cin>>num;
  m1.push(num);
  t1 +=num;
  }
  //untuk menara 2 (m2)
  for(int i=0; i<n2; i++){
  cin>>num;
  m2.push(num);
  t2+= num;
  }
  //untuk menara 3 (m3)
  for(int i=0;i<n3; i++){
  cin>>num;
  m3.push(num);
  t3 +=num;
  }
  while(t1 != t2 || t2 != t3){
  if(t1 > t2) {
  if (t2>t3){
  t1 -= m1.froot();
  m1.pop();
  }else{
if(
