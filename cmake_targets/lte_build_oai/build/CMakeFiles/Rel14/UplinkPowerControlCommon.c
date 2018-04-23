/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "UplinkPowerControlCommon.h"

static int
memb_p0_NominalPUSCH_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
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
memb_p0_NominalPUCCH_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= -96)) {
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
memb_deltaPreambleMsg3_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_p0_NominalPUSCH_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p0_NominalPUCCH_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -127, -96 }	/* (-127..-96) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_deltaPreambleMsg3_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UplinkPowerControlCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon, p0_NominalPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p0_NominalPUSCH_constraint_1,
		&asn_PER_memb_p0_NominalPUSCH_constr_2,
		0,
		"p0-NominalPUSCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon, alpha),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alpha"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon, p0_NominalPUCCH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p0_NominalPUCCH_constraint_1,
		&asn_PER_memb_p0_NominalPUCCH_constr_4,
		0,
		"p0-NominalPUCCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon, deltaFList_PUCCH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaFList_PUCCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaFList-PUCCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon, deltaPreambleMsg3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_deltaPreambleMsg3_constraint_1,
		&asn_PER_memb_deltaPreambleMsg3_constr_6,
		0,
		"deltaPreambleMsg3"
		},
};
static ber_tlv_tag_t asn_DEF_UplinkPowerControlCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalPUSCH at 6628 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* alpha at 6629 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p0-NominalPUCCH at 6630 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* deltaFList-PUCCH at 6631 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* deltaPreambleMsg3 at 6632 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommon_specs_1 = {
	sizeof(struct UplinkPowerControlCommon),
	offsetof(struct UplinkPowerControlCommon, _asn_ctx),
	asn_MAP_UplinkPowerControlCommon_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon = {
	"UplinkPowerControlCommon",
	"UplinkPowerControlCommon",
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
	asn_DEF_UplinkPowerControlCommon_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommon_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommon_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPowerControlCommon_1,
	5,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommon_specs_1	/* Additional specs */
};

