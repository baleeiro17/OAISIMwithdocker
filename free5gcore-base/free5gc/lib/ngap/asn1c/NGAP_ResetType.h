/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_ResetType_H_
#define	_NGAP_ResetType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ResetAll.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_ResetType_PR {
	NGAP_ResetType_PR_NOTHING,	/* No components present */
	NGAP_ResetType_PR_nG_Interface,
	NGAP_ResetType_PR_partOfNG_Interface
	/* Extensions may appear below */
	
} NGAP_ResetType_PR;

/* Forward declarations */
struct NGAP_UE_associatedLogicalNG_ConnectionListRes;

/* NGAP_ResetType */
typedef struct NGAP_ResetType {
	NGAP_ResetType_PR present;
	union NGAP_ResetType_u {
		NGAP_ResetAll_t	 nG_Interface;
		struct NGAP_UE_associatedLogicalNG_ConnectionListRes	*partOfNG_Interface;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_ResetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_ResetType;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_ResetType_H_ */
#include <asn_internal.h>