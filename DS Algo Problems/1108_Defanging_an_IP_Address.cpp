/*1108. Defanging an IP Address


Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"


*/

//code:

class Solution {
public:
    string defangIPaddr(string address) {
        string final;
        for(int i =0 ; i<address.size();i++){
            if(address[i]=='.'){
                final.push_back('[');
                final.push_back('.');
                final.push_back(']');
            }else
                final.push_back(address[i]);
        }
        return final;
    }
};

