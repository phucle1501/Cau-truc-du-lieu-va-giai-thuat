#include <iostream>
#include <string>

using namespace std;

void generateAllPasswords(string characters, long unsigned int maxLength, string currentPassword)
{
    // Base case: if the current password has reached the maximum length, print it and return
    if (currentPassword.length() == maxLength)
    {
        cout << currentPassword << endl;
        return;
    }

    // Recursive case: for each character in the set of characters, add it to the current password and call the function recursively
    for (long unsigned int i = 0; i < characters.length(); i++)
    {
        generateAllPasswords(characters, maxLength, currentPassword + characters[i]);
    }
}

int main()
{
    // Define the set of characters
    string characters;
    cin>>characters; 

    // Generate all passwords up to the length of the character set
    for (long unsigned int length = 1; length <= characters.length(); length++)
    {
        generateAllPasswords(characters, length, "");
    }

    return 0;
}

