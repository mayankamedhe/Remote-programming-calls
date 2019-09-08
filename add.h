/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int a;
};
typedef struct numbers numbers;

#define ADD_PROG 0x23451111
#define ADD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define add 1
extern  long * add_1(numbers *, CLIENT *);
extern  long * add_1_svc(numbers *, struct svc_req *);
extern long add_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define add 1
extern  long * add_1();
extern  long * add_1_svc();
extern long add_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */
