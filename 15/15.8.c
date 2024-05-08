struct Thinkbell_input
{
  unsigned int soft_num: 2;
  unsigned int: 1;
  unsigned int cd_rom_num: 2;
  unsigned int: 1;
  unsigned int hard_num: 2;
};

struct Klinkerbell_input
{
  unsigned int hard_num: 2;
  unsigned int: 1;
  unsigned int cd_rom_num: 2;
  unsigned int: 1;
  unsigned int soft_num: 2;
};
