export const params = {
  num1:{
    display: 'num1',
    type: 'text',
    default: '',
    size: 'half'
  },
  num2:{
    display: 'num2',
    type: 'text',
    default: '',
    size: 'half'
  },
  op:{
    display: 'operator',
    type: 'select',
    items: [
      {
        name: '+',
        display: '+'
      },
      {
        name: '-',
        display: '-'
      },
      {
        name: '*',
        display: '*'
      },
      {
        name: '/',
        display: '/'
      },
      {
        name: '%',
        display: '%'
      },
      {
        name: '^',
        display: '^'
      }
    ]
  }
}
