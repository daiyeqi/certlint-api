/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_NumericUserIdentifier_H_
#define	_NumericUserIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NumericString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NumericUserIdentifier */
typedef NumericString_t	 NumericUserIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NumericUserIdentifier;
asn_struct_free_f NumericUserIdentifier_free;
asn_struct_print_f NumericUserIdentifier_print;
asn_constr_check_f NumericUserIdentifier_constraint;
ber_type_decoder_f NumericUserIdentifier_decode_ber;
der_type_encoder_f NumericUserIdentifier_encode_der;
xer_type_decoder_f NumericUserIdentifier_decode_xer;
xer_type_encoder_f NumericUserIdentifier_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _NumericUserIdentifier_H_ */
#include <asn_internal.h>