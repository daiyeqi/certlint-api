/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_LocalPostalAttributes_H_
#define	_LocalPostalAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDSParameter.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LocalPostalAttributes */
typedef PDSParameter_t	 LocalPostalAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocalPostalAttributes;
asn_struct_free_f LocalPostalAttributes_free;
asn_struct_print_f LocalPostalAttributes_print;
asn_constr_check_f LocalPostalAttributes_constraint;
ber_type_decoder_f LocalPostalAttributes_decode_ber;
der_type_encoder_f LocalPostalAttributes_encode_der;
xer_type_decoder_f LocalPostalAttributes_decode_xer;
xer_type_encoder_f LocalPostalAttributes_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LocalPostalAttributes_H_ */
#include <asn_internal.h>
