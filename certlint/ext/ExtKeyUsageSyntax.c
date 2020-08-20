/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#include "ExtKeyUsageSyntax.h"

static asn_TYPE_member_t asn_MBR_ExtKeyUsageSyntax_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_KeyPurposeId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ExtKeyUsageSyntax_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ExtKeyUsageSyntax_specs_1 = {
	sizeof(struct ExtKeyUsageSyntax),
	offsetof(struct ExtKeyUsageSyntax, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ExtKeyUsageSyntax = {
	"ExtKeyUsageSyntax",
	"ExtKeyUsageSyntax",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ExtKeyUsageSyntax_tags_1,
	sizeof(asn_DEF_ExtKeyUsageSyntax_tags_1)
		/sizeof(asn_DEF_ExtKeyUsageSyntax_tags_1[0]), /* 1 */
	asn_DEF_ExtKeyUsageSyntax_tags_1,	/* Same as above */
	sizeof(asn_DEF_ExtKeyUsageSyntax_tags_1)
		/sizeof(asn_DEF_ExtKeyUsageSyntax_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_ExtKeyUsageSyntax_1,
	1,	/* Single element */
	&asn_SPC_ExtKeyUsageSyntax_specs_1	/* Additional specs */
};
