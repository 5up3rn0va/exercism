from string import maketrans

def to_rna(dna_strand):
	intab = "GCTA"
	outab = "CGAU"
	trantab = maketrans(intab, outab)
	
	return dna_strand.translate(trantab)
