/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MasterInformationBlock-NB.h"

static int
memb_systemFrameNumber_MSB_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_hyperSFN_LSB_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_schedulingInfoSIB1_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_systemInfoValueTag_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_spare_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 11)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_operationModeInfo_r13_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemFrameNumber_MSB_r13_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hyperSFN_LSB_r13_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_schedulingInfoSIB1_r13_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemInfoValueTag_r13_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_spare_constr_12 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  11,  11 }	/* (SIZE(11..11)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_operationModeInfo_r13_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.inband_SamePCI_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inband_SamePCI_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inband-SamePCI-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.inband_DifferentPCI_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Inband_DifferentPCI_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"inband-DifferentPCI-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.guardband_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Guardband_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"guardband-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, choice.standalone_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Standalone_NB_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"standalone-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_operationModeInfo_r13_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* inband-SamePCI-r13 at 9983 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* inband-DifferentPCI-r13 at 9984 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* guardband-r13 at 9985 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* standalone-r13 at 9987 */
};
static asn_CHOICE_specifics_t asn_SPC_operationModeInfo_r13_specs_7 = {
	sizeof(struct MasterInformationBlock_NB__operationModeInfo_r13),
	offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, _asn_ctx),
	offsetof(struct MasterInformationBlock_NB__operationModeInfo_r13, present),
	sizeof(((struct MasterInformationBlock_NB__operationModeInfo_r13 *)0)->present),
	asn_MAP_operationModeInfo_r13_tag2el_7,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_operationModeInfo_r13_7 = {
	"operationModeInfo-r13",
	"operationModeInfo-r13",
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
	&asn_PER_type_operationModeInfo_r13_constr_7,
	asn_MBR_operationModeInfo_r13_7,
	4,	/* Elements count */
	&asn_SPC_operationModeInfo_r13_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MasterInformationBlock_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, systemFrameNumber_MSB_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_systemFrameNumber_MSB_r13_constraint_1,
		&asn_PER_memb_systemFrameNumber_MSB_r13_constr_2,
		0,
		"systemFrameNumber-MSB-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, hyperSFN_LSB_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_hyperSFN_LSB_r13_constraint_1,
		&asn_PER_memb_hyperSFN_LSB_r13_constr_3,
		0,
		"hyperSFN-LSB-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, schedulingInfoSIB1_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_schedulingInfoSIB1_r13_constraint_1,
		&asn_PER_memb_schedulingInfoSIB1_r13_constr_4,
		0,
		"schedulingInfoSIB1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, systemInfoValueTag_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_systemInfoValueTag_r13_constraint_1,
		&asn_PER_memb_systemInfoValueTag_r13_constr_5,
		0,
		"systemInfoValueTag-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, ab_Enabled_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ab-Enabled-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, operationModeInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_operationModeInfo_r13_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"operationModeInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MasterInformationBlock_NB, spare),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_spare_constraint_1,
		&asn_PER_memb_spare_constr_12,
		0,
		"spare"
		},
};
static ber_tlv_tag_t asn_DEF_MasterInformationBlock_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MasterInformationBlock_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemFrameNumber-MSB-r13 at 9977 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hyperSFN-LSB-r13 at 9978 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* schedulingInfoSIB1-r13 at 9979 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* systemInfoValueTag-r13 at 9980 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ab-Enabled-r13 at 9981 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* operationModeInfo-r13 at 9983 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* spare at 9988 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MasterInformationBlock_NB_specs_1 = {
	sizeof(struct MasterInformationBlock_NB),
	offsetof(struct MasterInformationBlock_NB, _asn_ctx),
	asn_MAP_MasterInformationBlock_NB_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_NB = {
	"MasterInformationBlock-NB",
	"MasterInformationBlock-NB",
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
	asn_DEF_MasterInformationBlock_NB_tags_1,
	sizeof(asn_DEF_MasterInformationBlock_NB_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_NB_tags_1[0]), /* 1 */
	asn_DEF_MasterInformationBlock_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_MasterInformationBlock_NB_tags_1)
		/sizeof(asn_DEF_MasterInformationBlock_NB_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MasterInformationBlock_NB_1,
	7,	/* Elements count */
	&asn_SPC_MasterInformationBlock_NB_specs_1	/* Additional specs */
};

