//
// Created by Guanhao Huang Chen on 4/5/23.
//

#include "HeightApp.h"

HeightApp::HeightApp() {

}

void HeightApp::run() {
    // Create Height objects
    Height h3(5, 8); // feet: 5, inches: 8, output format: 5’ 8”
    Height h4(-1, 5); // feet: 0, inches: 5, output format: 0’ 5” (invalid feet)
    Height h5(6, 15); // feet: 6, inches: 0, output format: 6’ 0” (invalid inches)
// Print height h3
    cout << "h3: ";
    h3.print(); // h3: 5’ 8”
    cout << endl;
// Add more code below to print h4 and h5 like h3 above
// Perform various operations
    h3.setFeet(-2); // feet: 5, inches: 8, feet stay the same
    h3.setInches(10); // feet: 5, inches: 10
    cout << "feet: " << h3.getFeet() << ", inches: " << h3.getInches() << endl; // 5’ 10”
    h4.setFeet(6); // feet: 6, inches: 5
    h4.setInches(12); // feet: 6, inches: 5, inches stay the same
    cout << "feet: " << h4.getFeet() << ", inches: " << h4.getInches() << endl; // 6’ 5”
    h5.setInches(10); // feet: 6, inches: 10
    h5.adjust(); // feet: 6, inches: 11
    h5.adjust(); // feet: 7, inches: 0
    h5.print(); // 7’ 0”
// Add more test cases if needed
cout<<endl<<endl;
    Height h6(0, 0); // feet: 0, inches: 0
// Print height (add code to label height and new line as needed)
    h6.print();
    cout<<endl;
// h6: 0’ 0”
    h6.adjust(12);
    h6.adjust(-3);
    h6.adjust();
    h6.adjust(10);
    cout << "Total inches: " << h6.totalInches() << endl;
    // feet: 1, inches: 0
    // feet: 0, inches: 9
    // feet: 0, inches: 10
    // feet: 1, inches: 8
// Print height (add code to label height and new line as needed) h6.print(); // h6: 1’ 8”
    if (h3 == h6) {
        cout << "h3 is the same as h6" << endl;
    }else {
        cout << "h3 is not the same as h6" << endl;
    }
// should output: h3 is not the same as h6
cout<<"extra credit: "<<endl;

// assume h3 (5’ 8”) and h6 (1’ 8”)
    if (h3 < h6)
        cout << "h3 is less than h6" << endl;
    else if (h3 == h6)
        cout << "h3 is the same as h6" << endl;
    else
        cout << "h3 is greater than h6" << endl;
// should output: h3 is greater than h6
    cout << "h3: " << h3 << endl; // h3: 5’ 8” (68 inches)
    cout << "h6: " << h6 << endl; // h6: 1’ 8” (20 inches)
// add more test cases as needed
};

void HeightApp::run2() {
// Create 2 Height objects
    Height h1; // feet: 0, inches: 0, output format: 0’ 0”
    Height h2(8); // feet: 8, inches: 0, output format: 8’ 0”
// Create Height objects (same as original version)
    Height h3(5, 8); // feet: 5, inches: 8, output format: 5’ 8”
    Height h4(-1, 5); // feet: 0, inches: 5, output format: 0’ 5” (invalid feet)
    Height h5(6, 15); // feet: 6, inches: 0, output format: 6’ 0” (invalid inches)
    Height arr[5] = {h1,h2,h3,h4,h5};
    for(int i =0;i<5;i++){
        arr[i].print();
        cout<<endl;
    }
}
