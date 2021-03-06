/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_EmergencyFallbackIndicator_H_
#define	_NGAP_EmergencyFallbackIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_EmergencyFallbackIndicator {
	NGAP_EmergencyFallbackIndicator_emergency_fallback_requested	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_EmergencyFallbackIndicator;

/* NGAP_EmergencyFallbackIndicator */
typedef long	 NGAP_EmergencyFallbackIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_EmergencyFallbackIndicator;
asn_struct_free_f NGAP_EmergencyFallbackIndicator_free;
asn_struct_print_f NGAP_EmergencyFallbackIndicator_print;
asn_constr_check_f NGAP_EmergencyFallbackIndicator_constraint;
ber_type_decoder_f NGAP_EmergencyFallbackIndicator_decode_ber;
der_type_encoder_f NGAP_EmergencyFallbackIndicator_encode_der;
xer_type_decoder_f NGAP_EmergencyFallbackIndicator_decode_xer;
xer_type_encoder_f NGAP_EmergencyFallbackIndicator_encode_xer;
oer_type_decoder_f NGAP_EmergencyFallbackIndicator_decode_oer;
oer_type_encoder_f NGAP_EmergencyFallbackIndicator_encode_oer;
per_type_decoder_f NGAP_EmergencyFallbackIndicator_decode_uper;
per_type_encoder_f NGAP_EmergencyFallbackIndicator_encode_uper;
per_type_decoder_f NGAP_EmergencyFallbackIndicator_decode_aper;
per_type_encoder_f NGAP_EmergencyFallbackIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_EmergencyFallbackIndicator_H_ */
#include <asn_internal.h>
