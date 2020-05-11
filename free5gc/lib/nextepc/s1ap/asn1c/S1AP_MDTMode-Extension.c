/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "S1AP_MDTMode-Extension.h"

/*
 * This type is implemented using S1AP_ProtocolIE_SingleContainer_7007P15,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_S1AP_MDTMode_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_MDTMode_Extension = {
	"MDTMode-Extension",
	"MDTMode-Extension",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_MDTMode_Extension_tags_1,
	sizeof(asn_DEF_S1AP_MDTMode_Extension_tags_1)
		/sizeof(asn_DEF_S1AP_MDTMode_Extension_tags_1[0]), /* 1 */
	asn_DEF_S1AP_MDTMode_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_MDTMode_Extension_tags_1)
		/sizeof(asn_DEF_S1AP_MDTMode_Extension_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_MDTMode_ExtensionIE_61,
	3,	/* Elements count */
	&asn_SPC_S1AP_MDTMode_ExtensionIE_specs_61	/* Additional specs */
};

