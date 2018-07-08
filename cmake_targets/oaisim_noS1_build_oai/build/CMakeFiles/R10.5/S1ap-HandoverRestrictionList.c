/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-HandoverRestrictionList.h"

static asn_TYPE_member_t asn_MBR_S1ap_HandoverRestrictionList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_HandoverRestrictionList, servingPLMN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_PLMNidentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"servingPLMN"
		},
	{ ATF_POINTER, 5, offsetof(struct S1ap_HandoverRestrictionList, equivalentPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_EPLMNs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"equivalentPLMNs"
		},
	{ ATF_POINTER, 4, offsetof(struct S1ap_HandoverRestrictionList, forbiddenTAs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ForbiddenTAs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forbiddenTAs"
		},
	{ ATF_POINTER, 3, offsetof(struct S1ap_HandoverRestrictionList, forbiddenLAs),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ForbiddenLAs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forbiddenLAs"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_HandoverRestrictionList, forbiddenInterRATs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ForbiddenInterRATs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forbiddenInterRATs"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_HandoverRestrictionList, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_HandoverRestrictionList_oms_1[] = { 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_S1ap_HandoverRestrictionList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_HandoverRestrictionList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingPLMN at 721 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* equivalentPLMNs at 722 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* forbiddenTAs at 723 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* forbiddenLAs at 724 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* forbiddenInterRATs at 725 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions at 727 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_HandoverRestrictionList_specs_1 = {
	sizeof(struct S1ap_HandoverRestrictionList),
	offsetof(struct S1ap_HandoverRestrictionList, _asn_ctx),
	asn_MAP_S1ap_HandoverRestrictionList_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1ap_HandoverRestrictionList_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_HandoverRestrictionList = {
	"S1ap-HandoverRestrictionList",
	"S1ap-HandoverRestrictionList",
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
	asn_DEF_S1ap_HandoverRestrictionList_tags_1,
	sizeof(asn_DEF_S1ap_HandoverRestrictionList_tags_1)
		/sizeof(asn_DEF_S1ap_HandoverRestrictionList_tags_1[0]), /* 1 */
	asn_DEF_S1ap_HandoverRestrictionList_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_HandoverRestrictionList_tags_1)
		/sizeof(asn_DEF_S1ap_HandoverRestrictionList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_HandoverRestrictionList_1,
	6,	/* Elements count */
	&asn_SPC_S1ap_HandoverRestrictionList_specs_1	/* Additional specs */
};
