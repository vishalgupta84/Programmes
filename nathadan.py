import xlsxwriter

workbook = xlsxwriter.Workbook('sample.xlsx')
worksheet = workbook.add_worksheet()

worksheet.write('A1', 'S.No')
worksheet.write('B1', 'Name')
worksheet.write('C1', 'Roll Number')
worksheet.write('D1', 'Department')



workbook.close()