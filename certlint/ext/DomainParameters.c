/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#include "DomainParameters.h"

static asn_TYPE_member_t asn_MBR_DomainParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DomainParameters, p),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainParameters, g),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"g"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DomainParameters, q),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q"
		},
	{ ATF_POINTER, 2, offsetof(struct DomainParameters, j),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"j"
		},
	{ ATF_POINTER, 1, offsetof(struct DomainParameters, validationParms),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ValidationParms,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"validationParms"
		},
};
static const ber_tlv_tag_t asn_DEF_DomainParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DomainParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 3 }, /* p */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 2 }, /* g */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 1 }, /* q */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 0 }, /* j */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, 0, 0 } /* validationParms */
};
static asn_SEQUENCE_specifics_t asn_SPC_DomainParameters_specs_1 = {
	sizeof(struct DomainParameters),
	offsetof(struct DomainParameters, _asn_ctx),
	asn_MAP_DomainParameters_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DomainParameters = {
	"DomainParameters",
	"DomainParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_DomainParameters_tags_1,
	sizeof(asn_DEF_DomainParameters_tags_1)
		/sizeof(asn_DEF_DomainParameters_tags_1[0]), /* 1 */
	asn_DEF_DomainParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_DomainParameters_tags_1)
		/sizeof(asn_DEF_DomainParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DomainParameters_1,
	5,	/* Elements count */
	&asn_SPC_DomainParameters_specs_1	/* Additional specs */
};
