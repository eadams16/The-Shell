Eric Adams CSCD 340 Shell 
--README--

I got 2,4,6,7 all done. #1 (background) partially works but not compeletely.

#2 should work completely

The .poshrc in the project has an alias f which is "ls -l | wc -w"
.poshrc doesn't have to be there to work
The default histCount = 100 and histFileCount = 100.
It prints out the list correctly if those values are changed as well.

.posh_history writes correctly everytime the program exits, !! and !(value) will work. 

I couldn't implement direction becuase it broke my program when I tried it so I just issued a printf statement which states that it doesn't work.

Aliasing and unaliasing works properly.

Background somewhat works, but for certain commands such as ls & but just l & doesn't work.

Everything working is leak free without errors from what I've tested.

To run the program, type make and then ./posh

