/*@_################################################
#
#   File:       states.h
#
#   Author:     Omar Isai Pinales Ayala
#   email:      omarisai_p@hotmail.com
#
#   Created:    Jul 2th, 2019
#   License:    GPLv3
#
####################################################
//*/
/********************************************************************************
 *
 *  File:           {{ FILE }}
 *
 *  Created:        {{ date("") }}
 *  Abstract:       Contains project variables organized in enumerations
 *                  according to the category.
 * 
 *  IMPORTANT: THIS IS AN AUTO GENERATED FILE, DO NOT MODIFY THE CONTENT.
 *
 ********************************************************************************/

#ifndef _FSM_/*@ cat(ucase(Project), "_", ucase(FILENAME), "_H_") //*/
#define _FSM_/*@ cat(ucase(Project), "_", ucase(FILENAME), "_H_") //*/

typedef enum {
/*@if States:/*@_ //*/
    // States
    /*@for index, state in States:/*@_ //*/
    eState/*@state.Name//*//*@if index < States - 1 || SuperStates:,//*/
    //*/
//*/
/*@if SuperStates:/*@_ //*/
    // Super states
    /*@for index, state in SuperStates:/*@_ //*/
    eState/*@state.Name//*//*@if index < SuperStates - 1:,//*/
    //*/
//*/
} E@project_States;

#endif //_FSM_/*@ cat(ucase(Project), "_", ucase(FILENAME), "_H_") //*/
