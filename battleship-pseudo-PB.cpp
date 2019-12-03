void printBoard(int grid[10][]) //function to print board
{
    int z, f;

    cout << " 0|1|2|3|4|5|6|7|8|9 " << endl << endl;

    for (z = 0; z < 10; z++)    //column loop
    {
        for (f = 0; f < 10; f++) //row loop
        {
            if (f == 0)
            {
                cout << z << "  ";  //pront row number and spaces
            }
            cout << grid[z][f];
            if (f! = 9)
            {
                cout << "~";    // Fill waterLine for loop '~'

            }
        }
        cout << endl;
    }
    cout << endl;
}

void shipGen(Bboard &board, int ships[3], int maxShip) // Generates the ship locations
{
    int ships = 0;  //set ships to 0 to start
		while (ships < maxShip)
		{
			int xPos = rand() % 3; // modulus 3 to make an int between 0 and 3
			int yPos = rand() % 3; // modulus 3 to make an int between 0 and 3

			if ([xPos][yPos] != 1)
			{
				ships++;
				[xPos][yPos] = 1; // sets position to 1
			}

		}

}
