# Convention 

This file contains all the convention of the cube pieces. Namely, there are 3 different type of cube pieces: Center, Edge, Corner. We will go in detail about these pieces in the following documentation. Initially, however the color of the cube are abhreviated in the following manner.

`
White = W;
Red = R;
Orange = O;
Blue = B;
Yellow = Y;
Green = G;
`

## Center Pieces

There are a total of 6 center pieces in a cube, all of them stay stationary. Now in matrix form of each face the center lies in the a-base(2,2) or in the second row and second column.

The center pieces of the cube when abhreviated in colored and indexed format is:
 
center[0]=[G]\ 
center[1]=[W]\ 
center[2]=[B]\ 
center[3]=[Y]\ 
center[4]=[R](right first)\ 
center[5]=[O]\ 

## Edge Pieces

In total there are 12 edges on a standard 3x3 Rubik's Cube. And they can be combined in only one way, which is the default factory setup. However, there can be some misinterpretetation in the oreintation of the edge piece. Therefore, having a good convention is necessary; for this, I have arranged a stack of all my edge pieces and faced them in a uniform direction. And now all the data will be taken by indexing the first color of the array as the top-most color value, and the last color of the array, as the bottom-most value.

The indexed format of the array is:


edge[0]=[R,W]\
edge[1]=[Y,R]\
edge[2]=[O,Y]\
edge[3]=[O,W]\
edge[4]=[R,B]\
edge[5]=[Y,B]\
edge[6]=[G,W]\
edge[7]=[G,O]\
edge[8]=[O,B]\
edge[9]=[B,W]\
edge[10]=[G,Y]\
edge[11]=[G,R]\
