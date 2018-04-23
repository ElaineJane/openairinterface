/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "HandoverPreparationInformation-v9e0-IEs.h"

static asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_v9e0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HandoverPreparationInformation_v9e0_IEs, as_Config_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AS_Config_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"as-Config-v9e0"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverPreparationInformation_v9e0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandoverPreparationInformation_v1130_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_HandoverPreparationInformation_v9e0_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HandoverPreparationInformation_v9e0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* as-Config-v9e0 at 13322 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension at 13323 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_v9e0_IEs_specs_1 = {
	sizeof(struct HandoverPreparationInformation_v9e0_IEs),
	offsetof(struct HandoverPreparationInformation_v9e0_IEs, _asn_ctx),
	asn_MAP_HandoverPreparationInformation_v9e0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HandoverPreparationInformation_v9e0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v9e0_IEs = {
	"HandoverPreparationInformation-v9e0-IEs",
	"HandoverPreparationInformation-v9e0-IEs",
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
	asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1,
	sizeof(asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1)
		/sizeof(asn_DEF_HandoverPreparationInformation_v9e0_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HandoverPreparationInformation_v9e0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_HandoverPreparationInformation_v9e0_IEs_specs_1	/* Additional specs */
};

