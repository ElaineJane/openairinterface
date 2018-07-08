/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RRCConnectionRelease-NB.h"

static asn_per_constraints_t asn_PER_type_c1_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_NB__criticalExtensions__c1, choice.rrcConnectionRelease_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionRelease_NB_r13_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionRelease-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_NB__criticalExtensions__c1, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare1"
		},
};
static asn_TYPE_tag2member_t asn_MAP_c1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionRelease-r13 at 11469 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* spare1 at 11470 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_4 = {
	sizeof(struct RRCConnectionRelease_NB__criticalExtensions__c1),
	offsetof(struct RRCConnectionRelease_NB__criticalExtensions__c1, _asn_ctx),
	offsetof(struct RRCConnectionRelease_NB__criticalExtensions__c1, present),
	sizeof(((struct RRCConnectionRelease_NB__criticalExtensions__c1 *)0)->present),
	asn_MAP_c1_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_4 = {
	"c1",
	"c1",
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
	&asn_PER_type_c1_constr_4,
	asn_MBR_c1_4,
	2,	/* Elements count */
	&asn_SPC_c1_specs_4	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_criticalExtensionsFuture_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_7 = {
	sizeof(struct RRCConnectionRelease_NB__criticalExtensions__criticalExtensionsFuture),
	offsetof(struct RRCConnectionRelease_NB__criticalExtensions__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_7 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
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
	asn_DEF_criticalExtensionsFuture_tags_7,
	sizeof(asn_DEF_criticalExtensionsFuture_tags_7)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_7[0]) - 1, /* 1 */
	asn_DEF_criticalExtensionsFuture_tags_7,	/* Same as above */
	sizeof(asn_DEF_criticalExtensionsFuture_tags_7)
		/sizeof(asn_DEF_criticalExtensionsFuture_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_NB__criticalExtensions, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_NB__criticalExtensions, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_criticalExtensionsFuture_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensionsFuture"
		},
};
static asn_TYPE_tag2member_t asn_MAP_criticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 at 11469 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture at 11472 */
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_3 = {
	sizeof(struct RRCConnectionRelease_NB__criticalExtensions),
	offsetof(struct RRCConnectionRelease_NB__criticalExtensions, _asn_ctx),
	offsetof(struct RRCConnectionRelease_NB__criticalExtensions, present),
	sizeof(((struct RRCConnectionRelease_NB__criticalExtensions *)0)->present),
	asn_MAP_criticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_3 = {
	"criticalExtensions",
	"criticalExtensions",
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
	&asn_PER_type_criticalExtensions_constr_3,
	asn_MBR_criticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionRelease_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_NB, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionRelease_NB, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_criticalExtensions_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensions"
		},
};
static ber_tlv_tag_t asn_DEF_RRCConnectionRelease_NB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionRelease_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier at 11466 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensions at 11471 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_NB_specs_1 = {
	sizeof(struct RRCConnectionRelease_NB),
	offsetof(struct RRCConnectionRelease_NB, _asn_ctx),
	asn_MAP_RRCConnectionRelease_NB_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_NB = {
	"RRCConnectionRelease-NB",
	"RRCConnectionRelease-NB",
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
	asn_DEF_RRCConnectionRelease_NB_tags_1,
	sizeof(asn_DEF_RRCConnectionRelease_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_NB_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionRelease_NB_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionRelease_NB_tags_1)
		/sizeof(asn_DEF_RRCConnectionRelease_NB_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionRelease_NB_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionRelease_NB_specs_1	/* Additional specs */
};
