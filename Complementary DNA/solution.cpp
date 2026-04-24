#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string dnaCopy = dna;
  for (int i = 0; i < dnaCopy.length(); i++) {
    if (dna[i] == 'A') {
      dnaCopy[i] = 'T';
    }
    else if (dna[i] == 'T') {
      dnaCopy[i] = 'A';
    }
    else if (dna[i] == 'C') {
      dnaCopy[i] = 'G';
    }
    else if (dna[i] == 'G') {
      dnaCopy[i] = 'C';
    }
  }
  return dnaCopy;
}