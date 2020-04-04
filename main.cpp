//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std;
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
bool less_than_7( int value );
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2
    {
          vector<int> vec; 
  
public: 
    MyClassVector2(vector<int> v) : vec(v) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++) 
            cout << vec[i] << " "; 
    } 
    };

//Continue with MyClassVector2 and MyClassVector3
    class MyClassVector3
    {
              vector<int>& vec; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++) 
            cout << vec[i] << " "; 
    }
    };
    
int main() 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(3.2);
    vd.push_back(5.2);
    vd.push_back(3.4);

    //add 3 elements to the vi (vector)
    vi.push_back(3);
    vi.push_back(4);
    vi.push_back(5);

    //add 3 elements to the vs vector  
    vs.push_back("it's");
    vs.push_back("cold");
    vs.push_back("outside");

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }

    //display the 3 elements in the vi vector
    cout << "\nValues in vi: \n";
    for(int vals : vi)
    {
      cout << vals << endl;
    }

   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n";
   for(string vals : vs)
   {
     cout << vals << endl;
   }
   /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print();
        MyClassVector2 object2(vec);
        object2.print();
        MyClassVector3 obj3(vec);
        obj3.print();

  
    vector<int > vint
    (10); 
    vint[0];
    vint[1];
    vint[2];
    vint[3];
    vint[4];
    vint[5];
    vint[6];
    vint[7];
    vint[8];
    vint[9];

    //Display elements of a vector:
    vector< int >::iterator it;
    for ( it  = vint.begin(); it != vint.end(); ++it ) {
      //Like pointer, iterator is dereferenced to //access thde value of the element pointed poninted by it:
      cout << " " << *it;
    }

    /****Section_Name***STL_Iterators*/
    // An iterator is an object that provides access to objects stored in STL containers.
    // Iterators are designed to behave like C++ pointer.
    {
      vector< int > vint( 3); // vector with 3 integer numbers
      vint[ 0 ] = 10;
      vint[ 1 ] = 20;
      vint[ 2 ] = 30;

        //Display elements of the vector:
        vector< int >::iterator it;
        for (it = vint.begin(); it != vint.end(); ++it ) {
          //Like pointer, iterator id dereferenced to 
          // access the value of the element pointer by it \:
          cout << " " << *it;
        }
        return 0;
    }
    // output: 10 20 30

    /****Section_Name*** Stack*/
    //A stack is a container that permits to insert and extract its elements only from the top of the container  
    stack< int > st;

    st.push( 100 ); // push number on the stack
    assert( st.size() == 1 ); //verify one element is on the stack

    st.top() = 456;   // assign new value
    assert( st.top() == 456 );

    st.pop();
    assert( st.empty() == true );



    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    //A set is a container tha holds unique elements.
    //The elements in std::set are always sorted
    {    
        set< int > iset;  // set of unique interger numbers

        iset.insert( 11 ); // populate set with some values
        iset.insert( -11 );
        iset.insert( 55 );
        iset.insert( 22 );
        iset.insert( 22 );
        if ( iset.find(55 ) != iset.end() ) { // is value already stored? 
        iset.insert( 55 );
        }
        assert( iset.size() == 4 ); //sanity check :-)
        set< int >::iterator it;
        for (it = iset.begin(); it != iset.end(); it++) {
            cout << " " << *it;
        }    
        return 0;
    }
    // output:  -11 11 22 55
    
          
    //Write comments that help one better understand what the code is doing.
    
    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structuretype T1 and another one of type T2
    //Is a C++ structure that holds one object of type T1 and another one of type T2:
    {
        pair< string, string > strstr;
        strstr.first = "Hello";
        strstr.second = "World";

        pair< int, string > intstr;
        intstr.first = 1;
        intstr.second = "one";

        pair< string, int > string( "two", 2 );
        assert( string.first == "two" );
        assert( string.second == 2);
        
    }
    //Write comments that help one better understand what 
    //the code is doing.
    
    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    //Use insert() to put a new item only if it isn't there:
    {
        MapT amap;
        pair< MapIterT, bool> result =
            amap.insert( make_pair( "Fred", 45) );

        assert( result.second == true );
        assert( result.first->second == 45 );

        result = amap.insert( make_pair( "Fred", 54) );
        // Fred was already in the map, and result.first
        // simply pints there now:
        assert( result.second == false );
        assert( result.first->second == 45 );
    }       


    //Write comments that help one better understand what the code is doing.
    
    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    // A map is a container that holds unique pairs of keys and values.
    // The elements in std::map are always sorted by its keys.
    // Each element of the map is formed by the combination of the key value and a mapped value.
    // Map iterators access both the key and the mapped value at the same time.
    {
        map< string, string > phone_book;
        phone_book[ "411" ] = "Directory";
        phone_book[ "911" ] = "Emergency";
        phone_book[ "508-678-2811" ] = "BCC";
        if ( phone_book.find( "411" ) != phone_book.end() ) {
          phone_book.insert(
            make_pair(
              string( "411" ),
              string( "Directory")
            )
          );
        } 
        assert( phone_book.size()== 3 );
        map< string, string >::const_iterator it;
        for ( it = phone_book.begin(); it != phone_book.end(); ++it ) {
          cout
              << " " << it-> first 
              << " " << it-> second
              << endl
              ;
        }  
        return 0;
    }

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
        int arr[ 100 ];
        sort( arr, arr + 100 );
        vector<int> v2;
        sort( v2.begin(), v2.end() );

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

          vector< int > v1;
          int cout_less = std::count_if(v1.begin(), v1.end(), less_than_7 );

    //Write comments that help one better understand what the code is doing. 
      
   return 0;
}

bool less_than_7( int value )
          {
            return value < 7;
          }
    

     
 