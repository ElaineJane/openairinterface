/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SCG-ConfigInfo-v1330-IEs.h"

static asn_TYPE_member_t asn_MBR_SCG_ConfigInfo_v1330_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigInfo_v1330_IEs, measResultListRSSI_SCG_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListRSSI_SCG_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListRSSI-SCG-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigInfo_v1330_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCG_ConfigInfo_v1430_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_SCG_ConfigInfo_v1330_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SCG_ConfigInfo_v1330_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListRSSI-SCG-r13 at 13408 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension at 13409 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigInfo_v1330_IEs_specs_1 = {
	sizeof(struct SCG_ConfigInfo_v1330_IEs),
	offsetof(struct SCG_ConfigInfo_v1330_IEs, _asn_ctx),
	asn_MAP_SCG_ConfigInfo_v1330_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SCG_ConfigInfo_v1330_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_v1330_IEs = {
	"SCG-ConfigInfo-v1330-IEs",
	"SCG-ConfigInfo-v1330-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1,
	sizeof(asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1)
		/sizeof(asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1[0]), /* 1 */
	asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1)
		/sizeof(asn_DEF_SCG_ConfigInfo_v1330_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SCG_ConfigInfo_v1330_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SCG_ConfigInfo_v1330_IEs_specs_1	/* Additional specs */
};

