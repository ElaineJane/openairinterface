/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SystemInformation-NB-r13-IEs.h"

static int
memb_sib_TypeAndInfo_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_Member_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sib_TypeAndInfo_r13_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sib_TypeAndInfo_r13_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib2_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib2-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib3_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType3_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib3-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib4_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType4_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib4-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib5_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType5_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib5-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib14_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType14_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib14-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib16_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType16_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib16-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib15_v1430),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType15_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib15-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib20_v1430),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType20_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib20-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, choice.sib22_v1430),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType22_NB_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib22-v1430"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib2-r13 at 11632 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sib3-r13 at 11633 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sib4-r13 at 11634 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sib5-r13 at 11635 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sib14-r13 at 11636 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sib16-r13 at 11637 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sib15-v1430 at 11639 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sib20-v1430 at 11640 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* sib22-v1430 at 11642 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_3 = {
	sizeof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member),
	offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, _asn_ctx),
	offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member, present),
	sizeof(((struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13__Member *)0)->present),
	asn_MAP_Member_tag2el_3,
	9,	/* Count of tags in the map */
	0,
	6	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_3 = {
	"CHOICE",
	"CHOICE",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_Member_constr_3,
	asn_MBR_Member_3,
	9,	/* Elements count */
	&asn_SPC_Member_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sib_TypeAndInfo_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_sib_TypeAndInfo_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sib_TypeAndInfo_r13_specs_2 = {
	sizeof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13),
	offsetof(struct SystemInformation_NB_r13_IEs__sib_TypeAndInfo_r13, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sib_TypeAndInfo_r13_2 = {
	"sib-TypeAndInfo-r13",
	"sib-TypeAndInfo-r13",
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
	asn_DEF_sib_TypeAndInfo_r13_tags_2,
	sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2)
		/sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_sib_TypeAndInfo_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2)
		/sizeof(asn_DEF_sib_TypeAndInfo_r13_tags_2[0]), /* 2 */
	&asn_PER_type_sib_TypeAndInfo_r13_constr_2,
	asn_MBR_sib_TypeAndInfo_r13_2,
	1,	/* Single element */
	&asn_SPC_sib_TypeAndInfo_r13_specs_2	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_15 = {
	sizeof(struct SystemInformation_NB_r13_IEs__nonCriticalExtension),
	offsetof(struct SystemInformation_NB_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_15 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
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
	asn_DEF_nonCriticalExtension_tags_15,
	sizeof(asn_DEF_nonCriticalExtension_tags_15)
		/sizeof(asn_DEF_nonCriticalExtension_tags_15[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_15,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_15)
		/sizeof(asn_DEF_nonCriticalExtension_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformation_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformation_NB_r13_IEs, sib_TypeAndInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sib_TypeAndInfo_r13_2,
		memb_sib_TypeAndInfo_r13_constraint_1,
		&asn_PER_memb_sib_TypeAndInfo_r13_constr_2,
		0,
		"sib-TypeAndInfo-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformation_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformation_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_SystemInformation_NB_r13_IEs_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_SystemInformation_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformation_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-TypeAndInfo-r13 at 11642 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension at 11643 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension at 11644 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformation_NB_r13_IEs_specs_1 = {
	sizeof(struct SystemInformation_NB_r13_IEs),
	offsetof(struct SystemInformation_NB_r13_IEs, _asn_ctx),
	asn_MAP_SystemInformation_NB_r13_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformation_NB_r13_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformation_NB_r13_IEs = {
	"SystemInformation-NB-r13-IEs",
	"SystemInformation-NB-r13-IEs",
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
	asn_DEF_SystemInformation_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformation_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformation_NB_r13_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformation_NB_r13_IEs_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformation_NB_r13_IEs_specs_1	/* Additional specs */
};

