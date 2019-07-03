/*@_################################################
#
#   File:       variables.h
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

#ifndef _FSM_/*@ cat(ucase(Project), "_", ucase(Project), "_H_") //*/
#define _FSM_/*@ cat(ucase(Project), "_", ucase(Project), "_H_") //*/

/* Machine Inputs */

/*@if Variables.BooleanInputs:/*@_ //*/
//Boolean Inputs
typedef enum {
    /*@for index, var in Variables.BooleanInputs:/*@_ //*/
    ebi/*@var.Name//*//*@if index < Variables.BooleanInputs - 1:,//*/
    //*/
} EBooleanInputs;
//*/

/*@if Variables.InputEvents:/*@_ //*/
// Input Events
typedef enum {
    /*@for index, var in Variables.InputEvents:/*@_ //*/
    eie/*@var//*//*@if index < Variables.InputEvents - 1:,//*/
    //*/
} EInputEvents;
//*/

/* Machine Flags */

/*@if Variables.BooleanFlags:/*@_ //*/
//Boolean Flags
typedef enum {
    /*@for index, var in Variables.BooleanFlags:/*@_ //*/
    ebf/*@var.Name//*//*@if index < Variables.BooleanFlags - 1:,//*/
    //*/
} EBooleanFlags;
//*/

/*@if Variables.CounterFlags:/*@_ //*/
//Counter Flags
typedef enum {
    /*@for index, var in Variables.CounterFlags:/*@_ //*/
    ecf/*@var.Name//*//*@if index < Variables.CounterFlags - 1:,//*/
    //*/
} ECounterFlags;
//*/

/*@if Variables.MessageFlags:/*@_ //*/
//Message Flags
typedef enum {
    /*@for index, var in Variables.MessageFlags:/*@_ //*/
    emf/*@var//*//*@if index < Variables.MessageFlags - 1:,//*/
    //*/
} EMessageFlags;
//*/

/* Machine Outputs */

/*@if Variables.BooleanOutputs:/*@_ //*/
//Boolean Outputs
typedef enum {
    /*@for index, var in Variables.BooleanOutputs:/*@_ //*/
    ebo/*@var.Name//*//*@if index < Variables.BooleanOutputs - 1:,//*/
    //*/
} EBooleanOutputs;
//*/

/*@if Variables.OutputEvents:/*@_ //*/
// Output Events
typedef enum {
    /*@for index, var in Variables.OutputEvents:/*@_ //*/
    eoe/*@var//*//*@if index < Variables.OutputEvents - 1:,//*/
    //*/
} EOutputEvents;
//*/

#endif //_FSM_/*@ cat(ucase(Project), "_", ucase(Project), "_H_") //*/
