/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#include "CRLNumber.h"

int
CRLNumber_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Check if the sign bit is present */
	value = st->buf ? ((st->buf[0] & 0x80) ? -1 : 1) : 0;
	
	if((value >= 0)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using INTEGER,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_CRLNumber_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CRLNumber = {
	"CRLNumber",
	"CRLNumber",
	&asn_OP_INTEGER,
	asn_DEF_CRLNumber_tags_1,
	sizeof(asn_DEF_CRLNumber_tags_1)
		/sizeof(asn_DEF_CRLNumber_tags_1[0]), /* 1 */
	asn_DEF_CRLNumber_tags_1,	/* Same as above */
	sizeof(asn_DEF_CRLNumber_tags_1)
		/sizeof(asn_DEF_CRLNumber_tags_1[0]), /* 1 */
	{ 0, 0, CRLNumber_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

