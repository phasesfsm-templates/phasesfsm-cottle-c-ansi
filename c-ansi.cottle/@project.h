/*@_################################################
#
#   File:       @project.h
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

#ifndef _FSM_/*@ cat(ucase(Project), "_H_") //*/
#define _FSM_/*@ cat(ucase(Project), "_H_") //*/

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#include "@project/@machine.h"
#include "@project/variables.h"

/* Functions available for the user */

/*@if Variables.BooleanInputs:/*@_ //*/
/**
 * @brief Changes the state of a boolean input.
 * 
 * @param instance  Instance of the state machine group (fsm project instance).
 * @param input     Input name.
 * @param value     New value of the input.
 */
void @project_ChangeInput(@project_Struct *const instance, E@project_BooleanInputs input, bool value);
//*/

/*@if Variables.InputEvents:/*@_ //*/
/**
 * @brief Sends an event to the state machine.
 * 
 * @param instance  Instance of the state machine group (fsm project instance).
 * @param event     Event name.
 */
void @project_SendEvent(@project_Struct *const instance, E@project_EventInputs event);
//*/

/* Functions to declare on application side (callbacks) */

/*@if Data.BasicStatesList.Count > 0:/*@_ //*/
/**
 * @brief Called when the machine changes of state.
 * 
 * @param instance  Instance of the state machine group (fsm project instance).
 * @param previous  Previous state.
 * @param state     New state.
 */
extern void @project_StateChanged(@project_Struct *const instance, E@project_States previous, E@project_States state);
//*/
/*@if Variables.BooleanOutputs:/*@_ //*/
/**
 * @brief Called when an output changes of value.
 * 
 * @param instance  Instance of the state machine group (fsm project instance).
 * @param output    Output name.
 * @param value     New output value.
 */
extern void @project_OutputChanged(@project_Struct *const instance, E@project_BooleanOutputs output, bool value);
//*/
/*@if Variables.OutputEvents:/*@_ //*/
/**
 * @brief Called when an output event is raised.
 * 
 * @param instance  Instance of the state machine group (fsm project instance).
 * @param output    Event name.
 */
extern void @project_ReceiveEvent(@project_Struct *const instance, E@project_EventOutputs event);
//*/


#endif //_FSM_/*@ cat(ucase(Project), "_H_") //*/
