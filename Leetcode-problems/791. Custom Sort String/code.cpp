string orderCopy;
class Solution {
public:
static bool cmp (char a , char b){
    //login-->
    //order wali string me deckho, k konsa character pehle 
    //anna chahiye and and konsa character baad mein me aana chaihiye


    ///true --> a will be place before b
    ///false --> b will be place before a 
    

    //hume sirf order wali string  me a and b char kaha , kaise exists karta h
    //same vohi replicat karna h

    return (orderCopy.find(a)<orderCopy.find(b));
}
    string customSortString(string order, string s) {
        orderCopy = order;
        sort(s.begin(),s.end(),cmp);
        return s;

    }
};