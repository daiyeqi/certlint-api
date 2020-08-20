/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#include "IssuerAltName.h"

int
IssuerAltName_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using GeneralNames,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_IssuerAltName_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_IssuerAltName = {
	"IssuerAltName",
	"IssuerAltName",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_IssuerAltName_tags_1,
	sizeof(asn_DEF_IssuerAltName_tags_1)
		/sizeof(asn_DEF_IssuerAltName_tags_1[0]), /* 1 */
	asn_DEF_IssuerAltName_tags_1,	/* Same as above */
	sizeof(asn_DEF_IssuerAltName_tags_1)
		/sizeof(asn_DEF_IssuerAltName_tags_1[0]), /* 1 */
	{ 0, 0, IssuerAltName_constraint },
	asn_MBR_GeneralNames_1,
	1,	/* Single element */
	&asn_SPC_GeneralNames_specs_1	/* Additional specs */
};

