/*
 *
 * File:       kernel.h 
 * 
 * Author:     Subhajit Roy  
 *             subhajitroy005@gmail.com 
 *
 * Moudle:     Kernel
 * 
 * Info:       Include multiple kernel lib based on kernel selection
 *             
 * Dependency: Main OS interfece to all 
 *
 *
 * This file is part of U-BIOS.
 *
 * U-BIOS is free software: you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License 
 * as published by the Free Software Foundation, either version 
 * 3 of the License, or (at your option) any later version.
 *
 * U-BIOS is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with U-BIOS. If not, see <https://www.gnu.org/licenses/>.
 */


#ifndef __KERNEL_H__
#define __KERNEL_H__


/*
 * Include FreeRTOS related includes
 */
#if defined(KERN_FREERTOS)
#include "./FreeRTOS-Kernel/include/FreeRTOS.h"
#include "./FreeRTOS-Kernel/include/queue.h"
#include "./FreeRTOS-Kernel/include/task.h"
#include "./FreeRTOS-Kernel/include/timers.h"
#include "./FreeRTOS-Kernel/"
#endif




/*
 * 
 * which spans multiple lines.
 * It is long.
 */





#endif

