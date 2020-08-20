/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#include "DirectoryString.h"

static const int permitted_alphabet_table_3[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};

static int check_permitted_alphabet_3(const void *sptr) {
	const int *table = permitted_alphabet_table_3;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_4(const void *sptr) {
	/* The underlying type is UniversalString */
	const UniversalString_t *st = (const UniversalString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	if(st->size % 4) return -1; /* (size%4)! */
	for(; ch < end; ch += 4) {
		uint32_t cv = (ch[0] << 24)
				| (ch[1] << 16)
				| (ch[2] << 8)
				|  ch[3];
		(void)cv; /* Unused variable */
	}
	return 0;
}

static int check_permitted_alphabet_6(const void *sptr) {
	/* The underlying type is BMPString */
	const BMPString_t *st = (const BMPString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	if(st->size % 2) return -1; /* (size%2)! */
	for(; ch < end; ch += 2) {
		uint16_t cv = (ch[0] << 8)
				| ch[1];
		if(!(cv <= 65533)) return -1;
	}
	return 0;
}

static int
memb_teletexString_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const TeletexString_t *st = (const TeletexString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_printableString_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1)
		 && !check_permitted_alphabet_3(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_universalString_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UniversalString_t *st = (const UniversalString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size >> 2;	/* 4 byte per character */
	
	if((size >= 1)
		 && !check_permitted_alphabet_4(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_utf8String_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size >= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_bmpString_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BMPString_t *st = (const BMPString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size >> 1;	/* 2 byte per character */
	
	if((size >= 1)
		 && !check_permitted_alphabet_6(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

asn_TYPE_member_t asn_MBR_DirectoryString_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryString, choice.teletexString),
		(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),
		0,
		&asn_DEF_TeletexString,
		0,
		{ 0, 0,  memb_teletexString_constraint_1 },
		0, 0, /* No default value */
		"teletexString"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryString, choice.printableString),
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_PrintableString,
		0,
		{ 0, 0,  memb_printableString_constraint_1 },
		0, 0, /* No default value */
		"printableString"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryString, choice.universalString),
		(ASN_TAG_CLASS_UNIVERSAL | (28 << 2)),
		0,
		&asn_DEF_UniversalString,
		0,
		{ 0, 0,  memb_universalString_constraint_1 },
		0, 0, /* No default value */
		"universalString"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryString, choice.utf8String),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		0,
		{ 0, 0,  memb_utf8String_constraint_1 },
		0, 0, /* No default value */
		"utf8String"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DirectoryString, choice.bmpString),
		(ASN_TAG_CLASS_UNIVERSAL | (30 << 2)),
		0,
		&asn_DEF_BMPString,
		0,
		{ 0, 0,  memb_bmpString_constraint_1 },
		0, 0, /* No default value */
		"bmpString"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DirectoryString_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 3, 0, 0 }, /* utf8String */
    { (ASN_TAG_CLASS_UNIVERSAL | (19 << 2)), 1, 0, 0 }, /* printableString */
    { (ASN_TAG_CLASS_UNIVERSAL | (20 << 2)), 0, 0, 0 }, /* teletexString */
    { (ASN_TAG_CLASS_UNIVERSAL | (28 << 2)), 2, 0, 0 }, /* universalString */
    { (ASN_TAG_CLASS_UNIVERSAL | (30 << 2)), 4, 0, 0 } /* bmpString */
};
asn_CHOICE_specifics_t asn_SPC_DirectoryString_specs_1 = {
	sizeof(struct DirectoryString),
	offsetof(struct DirectoryString, _asn_ctx),
	offsetof(struct DirectoryString, present),
	sizeof(((struct DirectoryString *)0)->present),
	asn_MAP_DirectoryString_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DirectoryString = {
	"DirectoryString",
	"DirectoryString",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, CHOICE_constraint },
	asn_MBR_DirectoryString_1,
	5,	/* Elements count */
	&asn_SPC_DirectoryString_specs_1	/* Additional specs */
};

