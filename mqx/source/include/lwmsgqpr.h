#ifndef __lwmsgqpr_h__
#define __lwmsgqpr_h__ 1
/**HEADER********************************************************************
* 
* Copyright (c) 2008 Freescale Semiconductor;
* All Rights Reserved
*
* Copyright (c) 2004-2008 Embedded Access Inc.;
* All Rights Reserved
*
* Copyright (c) 1989-2008 ARC International;
* All Rights Reserved
*
*************************************************************************** 
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR 
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
* THE POSSIBILITY OF SUCH DAMAGE.
*
**************************************************************************
*
* $FileName: lwmsgqpr.h$
* $Version : 3.8.4.0$
* $Date    : Aug-30-2011$
*
* Comments:
*
*   This file contains private definitions for use with
*   light weight message queues
*
*END************************************************************************/


/*--------------------------------------------------------------------------*/
/*
**                            MACRO DEFINITIONS
*/

#define LWMSGQ_VALID        (_mqx_uint)(0x6C776D73) /* "lwms" */

#define LWMSGQ_READ_BLOCKED  (0x30 | IS_BLOCKED | TD_IS_ON_AUX_QUEUE)
#define LWMSGQ_WRITE_BLOCKED (0x32 | IS_BLOCKED | TD_IS_ON_AUX_QUEUE)

/*--------------------------------------------------------------------------*/
/*
** FUNCTION PROTOTYPES
*/

#ifdef __cplusplus
extern "C" {
#endif

_mqx_uint _lwmsgq_init_internal(pointer, _mqx_uint, _mqx_uint, boolean);

#ifdef __cplusplus
}
#endif

#endif
/* EOF */
