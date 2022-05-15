#include <iostream>
#include <cstdlib>
#include <string>

//Assignment says "minimum of 4 different exceptions".  I did this, and I think it
//technically fits, but there are literally only around 5-10 minutes going over exceptions
//in the Teams video and they don't go into much past basic catching.  I did over 4 different variable
//catches, which I believe should give 4 different types of exceptions, but I honestly don't
//entirely know how to do more advanced stuff.  A look online shows a bunch of stuff that
//would catch different things, but finding documentation on these specific things is a bit hard...
//I just reasoned that different data types have different things and thus are likely to do
//different exceptions.  I plan on figuring this out better as I go into more advanced stuff.
//also due to a lot of stuff this last week I have barely had time for homework.  Even with an extension on this
//I am 17 minutes before the new deadline currently... so I'm gonna turn this in now...

using namespace std;
int main()
{

    //cookie question
    while (true) {
        //try to give cookies
        try {
            cout << "Hey, I'm gonna need some cookies if you want in.  " <<
                "Gimme 5 and you can pass.\nHow many cookies do you give the bouncer ? " << endl;
            string cookieAmount;
            cin >> cookieAmount;

            //potential you didn't give a double, will throw and be caught by "..." catch
            double cookies = stod(cookieAmount);

            //if less than 5 cookies throw cookies "double" exception
            if (cookies >= 5) {
                break;
            }
            else {
                throw (cookies);
            }
        }
        //double exception catch
        catch (double cookies) {
            cout << "Hey pal, that isn't enough cookies.  Get out.\nYou gave " << cookies << " cookies..." << endl;
        }
        //catch-all miscellanious exceptions
        catch (...) {
            cout << "What is that?  That isn't a cookie... er... is that part of a cookie?  Get out.\nYou attempted to give something that was not a cookie..." << endl;
        }
    }

    cout << "You have successfully bribed the bouncer with a handful of cookies.\nYou're in.  " << endl;

    
    //shout question
    while (true) {
        //try to shout something
        try {
            cout << "You see a crowd of people before you, you get the urge to say hello." <<
                "\nWhat do you shout to them ? " << endl;

            string shout;
            cin >> shout;

            //if shout is too long to be concise shout, throw "string" shout exception
            if (shout.size() <= 10) {
                break;
            }
            else {
                throw (shout);
            }
        }
        //string exception catch
        catch (string shout) {
            cout << "Woah, get out man, don't yell so much.\nYou shouted " << shout << "..." << endl;
        }
        //all miscellanious exceptions
        catch (...) {
            cout << "You try to shout, but you feel unable..." << endl;
        }
    }

    cout << "You successfully shout, getting the attention of some guy.  I don't know who he is and you" <<
        " likely don't either." << endl;

    //number question
    while (true) {
        //try to give a man your number
        try {
            cout << "The guy just asks you for your number, it seems to be important.  I don't think this is just" <<
                " a guy asking for a date...\nGive it to him?\ny/n" << endl;

            char quesNum;
            cin >> quesNum;

            bool yesNum;
            //if answer is not one of these answers then throw "char" exception
            //note that due to cin and char, this can sometimes give a logic error where cin is spammed...
            //I don't know, nor have time to figure this out immediately, this assignment is due in 23 minutes
            //from now...
            if (quesNum == 'y') {
                yesNum = true;
            }
            else if(quesNum == 'n') {
                yesNum = false;
            }
            else
            {
                throw quesNum;
            }

            //if answer wasn't yes, then throw "bool" exception
            if (yesNum) {
                break;
            }
            else {
                throw yesNum;
            }
        }
        //char exception catch
        catch (char quesNum) {
            cout << "Please, yes or no?\nYou told me " << quesNum << "..." << endl;
        }
        //bool exception catch
        catch (bool yesNum) {
            cout << "We have nowhere to run away conspicuously, you might want to just give him the number." << endl;
        }
        //miscellanious exceptions
        catch (...) {
            cout << "You try to do something, but freeze up..." << endl;
        }
    }
    
    //punchline
    cout << "You discretely give the man your number... and in return, he merely gives you..." <<
        "5 cookies... the man was the bouncer all along.  It turns out he doesn't like oatmeal cookies and" <<
        " will be calling you for a new batch of 5 cookies later." << endl;
}
