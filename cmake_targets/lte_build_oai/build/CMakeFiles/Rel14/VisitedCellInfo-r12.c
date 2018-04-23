/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "VisitedCellInfo-r12.h"

static int
memb_timeSpent_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_visitedCellId_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_timeSpent_r12_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_pci_arfcn_r12_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VisitedCellInfo_r12__visitedCellId_r12__pci_arfcn_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VisitedCellInfo_r12__visitedCellId_r12__pci_arfcn_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq-r12"
		},
};
static ber_tlv_tag_t asn_DEF_pci_arfcn_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_pci_arfcn_r12_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r12 at 9820 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r12 at 9822 */
};
static asn_SEQUENCE_specifics_t asn_SPC_pci_arfcn_r12_specs_4 = {
	sizeof(struct VisitedCellInfo_r12__visitedCellId_r12__pci_arfcn_r12),
	offsetof(struct VisitedCellInfo_r12__visitedCellId_r12__pci_arfcn_r12, _asn_ctx),
	asn_MAP_pci_arfcn_r12_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pci_arfcn_r12_4 = {
	"pci-arfcn-r12",
	"pci-arfcn-r12",
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
	asn_DEF_pci_arfcn_r12_tags_4,
	sizeof(asn_DEF_pci_arfcn_r12_tags_4)
		/sizeof(asn_DEF_pci_arfcn_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_pci_arfcn_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_pci_arfcn_r12_tags_4)
		/sizeof(asn_DEF_pci_arfcn_r12_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_pci_arfcn_r12_4,
	2,	/* Elements count */
	&asn_SPC_pci_arfcn_r12_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_visitedCellId_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VisitedCellInfo_r12__visitedCellId_r12, choice.cellGlobalId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VisitedCellInfo_r12__visitedCellId_r12, choice.pci_arfcn_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_pci_arfcn_r12_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pci-arfcn-r12"
		},
};
static asn_TYPE_tag2member_t asn_MAP_visitedCellId_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId-r12 at 9818 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pci-arfcn-r12 at 9820 */
};
static asn_CHOICE_specifics_t asn_SPC_visitedCellId_r12_specs_2 = {
	sizeof(struct VisitedCellInfo_r12__visitedCellId_r12),
	offsetof(struct VisitedCellInfo_r12__visitedCellId_r12, _asn_ctx),
	offsetof(struct VisitedCellInfo_r12__visitedCellId_r12, present),
	sizeof(((struct VisitedCellInfo_r12__visitedCellId_r12 *)0)->present),
	asn_MAP_visitedCellId_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_visitedCellId_r12_2 = {
	"visitedCellId-r12",
	"visitedCellId-r12",
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
	&asn_PER_type_visitedCellId_r12_constr_2,
	asn_MBR_visitedCellId_r12_2,
	2,	/* Elements count */
	&asn_SPC_visitedCellId_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_VisitedCellInfo_r12_1[] = {
	{ ATF_POINTER, 1, offsetof(struct VisitedCellInfo_r12, visitedCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_visitedCellId_r12_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"visitedCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VisitedCellInfo_r12, timeSpent_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_timeSpent_r12_constraint_1,
		&asn_PER_memb_timeSpent_r12_constr_7,
		0,
		"timeSpent-r12"
		},
};
static int asn_MAP_VisitedCellInfo_r12_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_VisitedCellInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VisitedCellInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* visitedCellId-r12 at 9818 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeSpent-r12 at 9824 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VisitedCellInfo_r12_specs_1 = {
	sizeof(struct VisitedCellInfo_r12),
	offsetof(struct VisitedCellInfo_r12, _asn_ctx),
	asn_MAP_VisitedCellInfo_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_VisitedCellInfo_r12_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VisitedCellInfo_r12 = {
	"VisitedCellInfo-r12",
	"VisitedCellInfo-r12",
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
	asn_DEF_VisitedCellInfo_r12_tags_1,
	sizeof(asn_DEF_VisitedCellInfo_r12_tags_1)
		/sizeof(asn_DEF_VisitedCellInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_VisitedCellInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_VisitedCellInfo_r12_tags_1)
		/sizeof(asn_DEF_VisitedCellInfo_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VisitedCellInfo_r12_1,
	2,	/* Elements count */
	&asn_SPC_VisitedCellInfo_r12_specs_1	/* Additional specs */
};

