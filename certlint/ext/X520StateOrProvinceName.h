/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_X520StateOrProvinceName_H_
#define	_X520StateOrProvinceName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <TeletexString.h>
#include <PrintableString.h>
#include <UniversalString.h>
#include <UTF8String.h>
#include <BMPString.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X520StateOrProvinceName_PR {
	X520StateOrProvinceName_PR_NOTHING,	/* No components present */
	X520StateOrProvinceName_PR_teletexString,
	X520StateOrProvinceName_PR_printableString,
	X520StateOrProvinceName_PR_universalString,
	X520StateOrProvinceName_PR_utf8String,
	X520StateOrProvinceName_PR_bmpString
} X520StateOrProvinceName_PR;

/* X520StateOrProvinceName */
typedef struct X520StateOrProvinceName {
	X520StateOrProvinceName_PR present;
	union X520StateOrProvinceName_u {
		TeletexString_t	 teletexString;
		PrintableString_t	 printableString;
		UniversalString_t	 universalString;
		UTF8String_t	 utf8String;
		BMPString_t	 bmpString;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X520StateOrProvinceName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X520StateOrProvinceName;

#ifdef __cplusplus
}
#endif

#endif	/* _X520StateOrProvinceName_H_ */
#include <asn_internal.h>
