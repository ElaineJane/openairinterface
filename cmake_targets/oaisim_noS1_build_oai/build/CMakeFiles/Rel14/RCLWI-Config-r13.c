/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RCLWI-Config-r13.h"

static asn_per_constraints_t asn_PER_type_command_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_steerToWLAN_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RCLWI_Config_r13__command__steerToWLAN_r13, mobilityConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WLAN_Id_List_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mobilityConfig-r13"
		},
};
static ber_tlv_tag_t asn_DEF_steerToWLAN_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_steerToWLAN_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mobilityConfig-r13 at 6074 */
};
static asn_SEQUENCE_specifics_t asn_SPC_steerToWLAN_r13_specs_3 = {
	sizeof(struct RCLWI_Config_r13__command__steerToWLAN_r13),
	offsetof(struct RCLWI_Config_r13__command__steerToWLAN_r13, _asn_ctx),
	asn_MAP_steerToWLAN_r13_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_steerToWLAN_r13_3 = {
	"steerToWLAN-r13",
	"steerToWLAN-r13",
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
	asn_DEF_steerToWLAN_r13_tags_3,
	sizeof(asn_DEF_steerToWLAN_r13_tags_3)
		/sizeof(asn_DEF_steerToWLAN_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_steerToWLAN_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_steerToWLAN_r13_tags_3)
		/sizeof(asn_DEF_steerToWLAN_r13_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_steerToWLAN_r13_3,
	1,	/* Elements count */
	&asn_SPC_steerToWLAN_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_command_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RCLWI_Config_r13__command, choice.steerToWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_steerToWLAN_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"steerToWLAN-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RCLWI_Config_r13__command, choice.steerToLTE_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"steerToLTE-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_command_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* steerToWLAN-r13 at 6074 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* steerToLTE-r13 at 6075 */
};
static asn_CHOICE_specifics_t asn_SPC_command_specs_2 = {
	sizeof(struct RCLWI_Config_r13__command),
	offsetof(struct RCLWI_Config_r13__command, _asn_ctx),
	offsetof(struct RCLWI_Config_r13__command, present),
	sizeof(((struct RCLWI_Config_r13__command *)0)->present),
	asn_MAP_command_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_command_2 = {
	"command",
	"command",
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
	&asn_PER_type_command_constr_2,
	asn_MBR_command_2,
	2,	/* Elements count */
	&asn_SPC_command_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RCLWI_Config_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RCLWI_Config_r13, command),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_command_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"command"
		},
};
static ber_tlv_tag_t asn_DEF_RCLWI_Config_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RCLWI_Config_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* command at 6074 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RCLWI_Config_r13_specs_1 = {
	sizeof(struct RCLWI_Config_r13),
	offsetof(struct RCLWI_Config_r13, _asn_ctx),
	asn_MAP_RCLWI_Config_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RCLWI_Config_r13 = {
	"RCLWI-Config-r13",
	"RCLWI-Config-r13",
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
	asn_DEF_RCLWI_Config_r13_tags_1,
	sizeof(asn_DEF_RCLWI_Config_r13_tags_1)
		/sizeof(asn_DEF_RCLWI_Config_r13_tags_1[0]), /* 1 */
	asn_DEF_RCLWI_Config_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_RCLWI_Config_r13_tags_1)
		/sizeof(asn_DEF_RCLWI_Config_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RCLWI_Config_r13_1,
	1,	/* Elements count */
	&asn_SPC_RCLWI_Config_r13_specs_1	/* Additional specs */
};

