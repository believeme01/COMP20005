/* EV charging station location selector:
 *
 * Skeleton code written by Jianzhong Qi, October 2022
 * Edited by: [Add your name and student ID here]
 *
 */

#include <stdio.h>

#define DIV "==========" /* stage header */

/* function prototypes */
void print_stage_heading(int stage);

void stage_one(/* add function arguments */);
void stage_two(/* add function arguments */);
void stage_three(/* add function arguments */);
void stage_four(/* add function arguments */);

/* main program binds it all together */
int
main(int argc, char *argv[]) {

    /* declare variables for data storage */
    
    
    /* the first stage output */
    print_stage_heading(1);
    stage_one(/* add function arguments */);
    
    /* the second stage output */
    print_stage_heading(2);
    stage_two(/* add function arguments */);
    
    /* the third stage output */
    print_stage_heading(3);
    stage_three(/* add function arguments */);
    
    /* the fourth stage output */
    print_stage_heading(4);
    stage_four(/* add function arguments */);
    
    /* and done! */
    return 0;
}

/* print out a stage heading, with a prior blank line once the stage number
   goes plus one 
*/
void 
print_stage_heading(int stage) {
    /* main job is to print the stage number passed as an argument */
    if (stage > 1) {
        /* separate the stages */
        printf("\n");
    }
    printf("Stage %d\n%s\n", stage, DIV);
}

/* generate the output for stage 1 */
void 
stage_one(/* add function arguments */) {
    /* add code for stage 1 below */
}

/* generate the output for stage 2 */
void 
stage_two(/* add function arguments */) {
    /* add code for stage 2 below */
}

/* generate the output for stage 3 */
void 
stage_three(/* add function arguments */) {
    /* add code for stage 3 below */
}

/* generate the output for stage 4 */
void 
stage_four(/* add function arguments */) {
    /* add your code for stage 4 below */
}
