/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CSI-RS-ConfigBeamformed-v1430.h"

static int
memb_csi_RS_ConfigNZP_ApList_r14_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_csi_RS_ConfigNZP_ApList_r14_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_csi_RS_ConfigNZP_ApList_r14_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_csi_RS_ConfigNZP_ApList_r14_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CSI_RS_ConfigNZP_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_csi_RS_ConfigNZP_ApList_r14_specs_2 = {
	sizeof(struct CSI_RS_ConfigBeamformed_v1430__csi_RS_ConfigNZP_ApList_r14),
	offsetof(struct CSI_RS_ConfigBeamformed_v1430__csi_RS_ConfigNZP_ApList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_ConfigNZP_ApList_r14_2 = {
	"csi-RS-ConfigNZP-ApList-r14",
	"csi-RS-ConfigNZP-ApList-r14",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	SEQUENCE_OF_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2,
	sizeof(asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2)
		/sizeof(asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2)
		/sizeof(asn_DEF_csi_RS_ConfigNZP_ApList_r14_tags_2[0]), /* 2 */
	&asn_PER_type_csi_RS_ConfigNZP_ApList_r14_constr_2,
	asn_MBR_csi_RS_ConfigNZP_ApList_r14_2,
	1,	/* Single element */
	&asn_SPC_csi_RS_ConfigNZP_ApList_r14_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CSI_RS_ConfigBeamformed_v1430_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CSI_RS_ConfigBeamformed_v1430, csi_RS_ConfigNZP_ApList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_csi_RS_ConfigNZP_ApList_r14_2,
		memb_csi_RS_ConfigNZP_ApList_r14_constraint_1,
		&asn_PER_memb_csi_RS_ConfigNZP_ApList_r14_constr_2,
		0,
		"csi-RS-ConfigNZP-ApList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct CSI_RS_ConfigBeamformed_v1430, nzp_ResourceConfigOriginal_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_NZP_v1430,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nzp-ResourceConfigOriginal-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_ConfigBeamformed_v1430, csi_RS_NZP_Activation_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZP_Activation_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-NZP-Activation-r14"
		},
};
static int asn_MAP_CSI_RS_ConfigBeamformed_v1430_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CSI_RS_ConfigBeamformed_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-ConfigNZP-ApList-r14 at 4174 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nzp-ResourceConfigOriginal-v1430 at 4175 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* csi-RS-NZP-Activation-r14 at 4176 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigBeamformed_v1430_specs_1 = {
	sizeof(struct CSI_RS_ConfigBeamformed_v1430),
	offsetof(struct CSI_RS_ConfigBeamformed_v1430, _asn_ctx),
	asn_MAP_CSI_RS_ConfigBeamformed_v1430_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CSI_RS_ConfigBeamformed_v1430_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigBeamformed_v1430 = {
	"CSI-RS-ConfigBeamformed-v1430",
	"CSI-RS-ConfigBeamformed-v1430",
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
	asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1,
	sizeof(asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigBeamformed_v1430_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CSI_RS_ConfigBeamformed_v1430_1,
	3,	/* Elements count */
	&asn_SPC_CSI_RS_ConfigBeamformed_v1430_specs_1	/* Additional specs */
};

